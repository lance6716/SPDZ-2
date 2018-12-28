#!/usr/bin/env bash
./Player-Online.x -N 3 -h 127.0.0.1 0 matrix-test-backup > Output/P0.log 2> Output/P0-terminal-output.log &
./Player-Online.x -N 3 -h 127.0.0.1 1 matrix-test-backup > Output/P1.log 2> Output/P1-terminal-output.log &
./Player-Online.x -N 3 -h 127.0.0.1 2 matrix-test-backup > Output/P2.log 2> Output/P2-terminal-output.log 
cat Output/P0.log
