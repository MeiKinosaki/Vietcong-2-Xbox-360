CC ?= cc
CFLAGS ?= -std=c99 -Wall -Wextra -Werror -pedantic -O2
CPPFLAGS += -Isrc
BUILD_DIR := build
PLATFORM_SRC := src/platform/platform_stub.c

.PHONY: all test clean
all: $(BUILD_DIR)/vietcong2-scaffold

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/vietcong2-scaffold: src/main.c $(PLATFORM_SRC) src/platform/platform.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) src/main.c $(PLATFORM_SRC) -o $@

$(BUILD_DIR)/test-platform: tests/test_platform.c $(PLATFORM_SRC) src/platform/platform.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) tests/test_platform.c $(PLATFORM_SRC) -o $@

test: $(BUILD_DIR)/test-platform
	./$(BUILD_DIR)/test-platform

clean:
	rm -rf $(BUILD_DIR)
