app (file o) f(file i)
{
  "od" "-b" i @stdout=o;
}

main {
file x = input("mtc1.swift");
file y<"mtc1.octal">;
y = f(x);
}
