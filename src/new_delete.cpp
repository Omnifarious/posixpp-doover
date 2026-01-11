using size_t = decltype(sizeof(0));

void* operator new(size_t) noexcept {
  return nullptr;
}

void operator delete(void*) noexcept {}

void* operator new[](size_t) noexcept {
  return nullptr;
}

void operator delete[](void*) noexcept {}
