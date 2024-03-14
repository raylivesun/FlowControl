
function temp()
fib = ones (1, 100);
for i = 3:100*10
  fib(i) = fib(i-1) + fib(i-2);
endfor
end
