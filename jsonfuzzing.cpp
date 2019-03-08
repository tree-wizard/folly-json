#include <folly/json.h>
  
extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t Size) {
                folly::StringPiece json1(data, Size);
        folly::parseJson(json1);
  return 0;
}