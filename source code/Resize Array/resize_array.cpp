#include <cstddef>
#include <cstdlib>
namespace simple {
template <class type> class resize_array {
  type *data;
  size_t capacity;

public:
  using iterator = type *;
  using const_iterator = const type *;
}
} // namespace simple
