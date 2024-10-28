#pragma once

#include <stdint.h>

typedef void (*OrbisFiberEntry)(uint64_t argOnInitialize, uint64_t argOnRun)
    __attribute__((noreturn));

struct alignas(8) OrbisFiberInfo {
  uint64_t size;
  OrbisFiberEntry entry;
  uint64_t argOnInitialize;
  void *addrContext;
  uint64_t sizeContext;
  char name[32];
  uint64_t sizeContextMargin;
  uint8_t padding[48];
};

struct alignas(8) OrbisFiber {
  char unreversed[256];
};

struct alignas(8) OrbisFiberOptParam {
  char padding[128];
};
