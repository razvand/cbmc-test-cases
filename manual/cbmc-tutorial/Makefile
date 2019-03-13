.PHONY: all

all: buffer-overflow file1

buffer-overflow: buffer-overflow.c
	-cbmc --bounds-check $<

file1: file1.c
	-cbmc --show-properties --bounds-check --pointer-check $<
	-cbmc --show-vcc --bounds-check --pointer-check $<
	-cbmc --bounds-check --pointer-check $<
	-cbmc --bounds-check --trace $<

file2: file2.c
	-cbmc --function sum --bounds-check $<

binsearch: binsearch.c
	-cbmc --function binsearch --unwind 6 --bounds-check --unwinding-assertions $<

lock-example: lock-example.c
	-cbmc --unwind 100 --bounds-check --unwinding-assertions $<
