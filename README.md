# data_structure
My self practice 

(2021/12/29)
For stack:
1. Build the shared lib(.so), please do below:
gcc -shared -fPIC -o libstack.so stack.c
2. Build main.c, please do below:
gcc -o main main.c ./libstack.so
