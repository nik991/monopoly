#include "forward.h"

Forward::Forward(string name) :Field(name) {

}
void Forward::doTurn(Player* player[], int playerNum) {
	cout << player[playerNum]->getName() << " popal na " << this->getName() << endl;
}
Forward::~Forward() {

}