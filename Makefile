TOP = dummy
OBJDIR = obj_dir
SIM ?= 1
SIM_CPP = simulation_$(SIM).cpp
SIM_VIEW = view_$(SIM).cpp

default:
	verilator -Wall --cc $(TOP).v --exe $(SIM_CPP) --trace
	make -C $(OBJDIR) -f V$(TOP).mk V$(TOP)
	./$(OBJDIR)/V$(TOP)
	gtkwave dump.vcd view_1.gtkw
