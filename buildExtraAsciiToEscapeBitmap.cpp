#include <folly/json.h>

extern "C" int LLVMFuzzerTestOneInput(const char *data, size_t Size) {
  folly::json::buildExtraAsciiToEscapeBitmap(data);
        return 0;
}