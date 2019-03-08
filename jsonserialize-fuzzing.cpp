#include <folly/json.h>
  
extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t size) {
          folly::json::serialization_opts opts;
          folly::json::serialize(data, opts);
          return 0;
}

