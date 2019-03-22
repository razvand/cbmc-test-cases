.PHONY: all

all: piece_of_pie

piece_of_pie: piece_of_pie.c
	cbmc --string-abstraction --bounds-check $<

elven_godmother: elven_godmother.c
	cbmc -D__CPROVER_STRING_ABSTRACTION --unwind 20 --bounds-check $<

uninitialized: uninitialized.c
	cbmc --string-abstraction --bounds-check $<

hello_service: hello_service.c
	cbmc --string-abstraction --unwind 20 --bounds-check $<
