# Project Setup Instructions

## Install tools

```bash
sudo apt update
sudo apt install verilator gtkwave make
```

## Run a simulation
run `make` with the argument `SIM=n` depending on your simulation.
```bash

make SIM=1
```

This runs `simulation_1.cpp` and opens `dump.vcd` in GTKWave using `view_1.gtkw`.

## Save GTKWave view

After the sim runs:

1. Add signals in GTKWave
2. File → Write Save File
3. Save as `view_1.gtkw`

Next time you run `make SIM=1`, your saved view loads automatically.

## Delete Build Artifacts
```bash
make clean
```
