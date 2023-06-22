#include <stdio.h>

#include <caml/mlvalues.h>
#include <caml/memory.h>

CAMLprim value caml_add(value v1, value v2)
{
    CAMLparam2(v1, v2);

    int sum = Int_val(v1) + Int_val(v2);

    CAMLreturn(Val_int(sum));
}

CAMLprim void caml_hello(value name)
{
    CAMLparam1(name);

    printf("Hello %s\n", String_val(name));

    CAMLreturn0;
}
