#include <memory> // std::unique_ptr

struct node {
  std::unique_ptr<node> next; 
  int value;
  
  node(int value, std::unique_ptr<node> &&next) : 
    next(std::move(next)), value(value) {}
};

class linked_list {
  std::unique_ptr<node> first_node;
public:
  node *front() {
    return first_node.get(); // Observer
  }
  
  const node *back() const {
    node *ptr = first_node.get(); // Observer
    if (ptr != nullptr) {
      while (ptr->next != nullptr) {
        ptr = (*ptr).next.get(); // Equivalent to ptr->next.get()
      }
    }
    return ptr;
  }

  void push_front(int value) {
    auto new_node = std::make_unique<node>(
        value, 
        std::move(first_node));
    first_node = std::move(new_node);
  }
  
  void pop_front() {
    auto first = std::move(first_node);
    first_node = std::move(first->next);
  } // automatic deallocation of the first
};
