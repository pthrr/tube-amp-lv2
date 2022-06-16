#include <iostream>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

#include "lv2/core/lv2.h"

typedef enum { AMP_GAIN = 0, AMP_INPUT = 1, AMP_OUTPUT = 2 } PortIndex;

typedef struct {
  // Port buffers
  const float* gain;
  const float* input;
  float*       output;
} Amp;

static void
connect_port(LV2_Handle instance, uint32_t port, void* data)
{
  Amp* amp = (Amp*)instance;

  switch ((PortIndex)port) {
  case AMP_GAIN:
    amp->gain = (const float*)data;
    break;
  case AMP_INPUT:
    amp->input = (const float*)data;
    break;
  case AMP_OUTPUT:
    amp->output = (float*)data;
    break;
  }
}


int main() {
  std::cout << "Hallo Welt!" << std::endl;
  return 0;
}
