#include <algorithm>  // std::count
#include <cstddef>    // std::size_t
#include <cstdlib>    // std::system
#include <fstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <iostream>

namespace UPF {
template <typename T>
class digraph {
 private:
  struct node {
    T value;
    std::vector<node *> links;
  };

  using setofnodes=std::unordered_set<const node *>;

  std::unordered_map<T, node> nodes;

  node *find(T key) { return (node *)cfind(key); }

  const node *cfind(T key) const {
    auto it = nodes.find(key);
    if (it == nodes.end()) return nullptr;
    return &it->second;
  }

  void visit_node(const node *p, setofnodes &visited, int level=0) const {
    std::cout << std::string(level*4, ' ') << p->value << "\n";  // Mostra valor do nodo
    visited.insert(p);                   // Marca o nodo como já visitado
    for (auto ln : p->links) {           // Para cada nodo adjacente
      if (visited.count(ln) == 0)        // Se ainda não visitado
        visit_node(ln, visited, level+1);         // Visita o nodo
    }
  }

 public:
  void dfs(const T &from) const {
    auto p = cfind(from);
    if (!p) return;
    setofnodes visited;
    visit_node(p, visited);
  }

  void insert_node(T value) {
    if (nodes.count(value) > 0) return;
    node aux;
    aux.value = value;
    nodes[value] = aux;
  }

  void insert_link(T from, T to) {
    auto pfrom = find(from);
    if (pfrom == nullptr) return;
    auto pto = find(to);
    if (pto == nullptr) return;
    pfrom->links.push_back(pto);
  }

  void remove_node(const T &key) {
    auto p = find(key);
    if (!p) return;
    for (auto &[k, nd] : nodes) {
      auto it = std::find(nd.links.begin(), nd.links.end(), p);
      if (it != nd.links.end()) {  // Encontrou
        nd.links.erase(it);
      }
    }
    nodes.erase(key);
  }

  void remove_link(T from, T to) {
    auto pfrom = find(from);
    if (!pfrom) return;
    auto pto = find(to);
    if (!pto) return;
    auto it = std::find(pfrom->links.begin(), pfrom->links.end(), pto);
    if (it == pfrom->links.end()) return;
    pfrom->links.erase(it);
  }

  std::size_t size() const { return nodes.size(); }

  std::size_t outdegree(T key) const {
    auto p = cfind(key);
    if (!p) return 0;
    return p->links.size();
  }

  std::size_t indegree(T key) const {
    auto p = cfind(key);
    if (!p) return 0;
    std::size_t cont = 0;
    for (auto &[key, nd] : nodes) {
      cont += std::count(nd.links.begin(), nd.links.end(), p);
    }
    return cont;
  }

  std::size_t degree(T key) const { return indegree(key) + outdegree(key); }

  void draw() const {
    std::ofstream dot("/tmp/a987654.dot");
    dot << "digraph{\n";
    for (auto &[key, nd] : nodes) {
      dot << "\t\"" << key << "\" -> {";
      for (auto &link : nd.links) {
        dot << " \"" << link->value << "\" ";
      }
      dot << "}\n";
    }
    dot << "}\n";
    dot.close();
    std::system("dot -Tx11 /tmp/a987654.dot");
  }
};
}  // namespace UPF
