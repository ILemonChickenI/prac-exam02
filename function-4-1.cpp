#include "function-4-1.h"
#include <iostream>

using namespace std;

int room_count;
int capacity;

int RoomCounter(int cap) {
	
}

void enter() {
	if (room_count < capacity) {
		room_count++;
	}
}

void exit() {
	if (room_count > 0) {
		room_count--;
	}
}

int get_count() {
	return room_count;
}