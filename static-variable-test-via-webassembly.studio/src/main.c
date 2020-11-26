#define WASM_EXPORT __attribute__((visibility("default")))

static int v=42;
WASM_EXPORT
int main() {
  return v++;
}
