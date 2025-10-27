# CS 3853 - Virtual Memory & Cache Simulator
# Team 11 - Milestone #1

PROG = VMCacheSim
SRC = vm_cache_sim.c
CC = gcc
CFLAGS = -std=c11 -Wall -Wextra

OUT1 = Team_11_Sim_1_M#1.txt
OUT2 = Team_11_Sim_2_M#1.txt
OUT3 = Team_11_Sim_3_M#1.txt

all: $(PROG)

$(PROG): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

# Arbitrary values for output
outputs: &(PROG)
	./$(PROG) -s 512 -b 16 -a 4 -r rr -p 1024 -u 75 -n 100 -f A-9_new_trunk.trc > $(OUT1)
	./$(PROG) -s 64 -b 8 -a 2 -r rnd -p 256 -u 50 -n 200 -f A-9_new_trunk.trc > $(OUT2)
	./$(PROG) -s 1024 -b 32 -a 8 -r rr -p 2048 -u 25 -n 50 -f A-9_new_trunk.trc > $(OUT3)

# Run one quick example (for testing)
run: $(PROG)
	./$(PROG) -s 512 -b 16 -a 4 -r rr -p 1024 -u 75 -n 100 -f A-9_new_trunk.trc

clean:
	rm -f $(PROG) $(OUT1) $(OUT2) $(OUT3)