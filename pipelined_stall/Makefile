target ?= top
OBJDIR = obj_dir
sim ?= 1
SIM_CPP = sim_$(target)_$(sim).cpp
SIM_VIEW = view_$(target)_$(sim).gtkw

default:
	verilator -Wall -Wno-UNOPTFLAT -Wno-UNUSED -Wno-UNDRIVEN --cc $(target).v --exe $(SIM_CPP) --trace
	make -C $(OBJDIR) -f V$(target).mk V$(target)
	./$(OBJDIR)/V$(target)
	gtkwave dump.vcd $(SIM_VIEW)

clean:
	rm -rf $(OBJDIR) dump.vcd