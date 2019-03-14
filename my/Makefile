.PHONY: all

all: add hello_world

convoluted_hello_world: convoluted_hello_world.c
	-cbmc --show-properties $<
	-cbmc --function big_useless_function $<
	-cbmc $<

add: add.c
	-cbmc --show-properties $<
	-cbmc $<

buffers: buffers.c
	-cbmc --function data --bounds-check $<
	-cbmc --function stack --bounds-check $<
	-cbmc --function stack_dynamic --bounds-check $<
	-cbmc --function heap --bounds-check --pointer-check $<

loop: loop.c loop_multiple_vars.c
	-/usr/bin/time -v cbmc loop.c > /dev/null
	-/usr/bin/time -v cbmc loop_multiple_vars.c > /dev/null
