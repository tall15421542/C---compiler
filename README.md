# C---compiler

## User guide
[C-- specification](https://drive.google.com/open?id=1fDOG22i7T0gWgDJa5OIcPI_vEhp8piLS)  
[How to run the C-- compiler](https://drive.google.com/open?id=1Svh4KGCF8Rl0LODhdUdvnog7Vwddga4x)

```
make
// Compile into Risv-V instructions
./parser [Objective file]

// Linkink
riscv64-unknown-linux-gnu-gcc –static –O0 main.S

// execute the executable
qemu-riscv64 a.out
```
