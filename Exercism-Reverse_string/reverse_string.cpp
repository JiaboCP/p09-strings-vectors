#include "reverse_string.h"

namespace reverse_string {
  std::string reverse_string(std::string reverse_string) {
    return {reverse_string.rbegin(),reverse_string.rend()};
  }
}  // namespace reverse_string
