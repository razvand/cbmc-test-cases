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

list: list.c
	-cbmc --function list_search_item --bounds-check --pointer-check --unwind 50 $<
	-cbmc --function list_remove_item --bounds-check --pointer-check --unwind 50 $<
	-cbmc --function main --bounds-check --pointer-check --unwind 10 $<
	-cbmc --function main2 --bounds-check --pointer-check --unwind 10 $<
	-cbmc --function main3 --bounds-check --pointer-check --unwind 10 $<
	-cbmc --function main4 --bounds-check --pointer-check --unwind 10 $<
	-cbmc --function main5 --bounds-check --pointer-check --unwind 10 $<

loop_infinite: loop_infinite.c
	-cbmc --unwind 1000 --unwinding-assertions $<

recursive: recursive.c
	-cbmc --function fibonacci --unwind 7 --unwinding-assertions $<

assume_assert: assume_assert.c
	-cbmc $<
