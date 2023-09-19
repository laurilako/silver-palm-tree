#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {
  const char operators[] = {'+', '-', '*', '/'};

  FuzzedDataProvider fuzzed_data(data, size);
  float num1 = fuzzed_data.CConsumeFloatingPoint();
  float num2 = fuzzed_data.ConsumeFloatingPoint();
  char oper = fuzzed_data.PickValueInArray(operators);

  calculator(num1, oper, num2);

}
