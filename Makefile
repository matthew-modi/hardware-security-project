TOP = top
OBJDIR = obj_dir
SIM ?= 1
SIM_CPP = sim_$(SIM).cpp
SIM_VIEW = view_$(SIM).gtkw

default:
	verilator -Wall --cc $(TOP).v --exe $(SIM_CPP) --trace
	make -C $(OBJDIR) -f V$(TOP).mk V$(TOP)
	./$(OBJDIR)/V$(TOP)
	gtkwave dump.vcd $(SIM_VIEW)

clean:
	rm -rf $(OBJDIR) dump.vcd