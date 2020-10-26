#include <CL/sycl.hpp>

int main() {
  // Select a platform with a GPU
  auto p = sycl::platform(sycl::gpu_selector());
  std::cout << "Platform: "
	    << p.get_info<sycl::info::platform::name>()
	    << "\n";
  // Enumerate all the GPUs
  for (auto &d : p.get_devices()) {
          std::cout << "  Device: "
		<< d.get_info<sycl::info::device::name>()
		<< std::endl;
  }
}