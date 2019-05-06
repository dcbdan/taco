#include <python3.6/Python.h>
#include <pybind11/pybind11.h>
#include "pyformat.h"
#include "pydatatypes.h"
#include "py_index_notation.h"

PYBIND11_MODULE(pytaco, m){

  m.doc() = "A Python module for operating on Sparse Tensors.";
  using namespace taco::pythonBindings;
  defineTacoTypes(m);
  defineModeFormats(m);
  defineModeFormatPack(m);
  defineFormat(m);
  defineIndexNotation(m);

}
