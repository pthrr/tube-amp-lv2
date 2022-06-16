
genrule(
    name = "foo",
    srcs = [],
    outs = ["foo.h"],
    cmd = "./$(location create_foo.pl) > \"$@\"",
    tools = ["create_foo.pl"],
)
