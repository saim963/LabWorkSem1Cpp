#include <iostream>
#include <stack>
using namespace std;

struct Move
{
    int n;
    char source, auxiliary, destination;
};

void towerOfHanoiNonRecursive(int n, char source, char auxiliary, char destination)
{
    stack<Move> moves;
    Move initialMove = {n, source, auxiliary, destination};
    moves.push(initialMove);

    while (!moves.empty())
    {
        Move currentMove = moves.top();
        moves.pop();
        n = currentMove.n;
        source = currentMove.source;
        auxiliary = currentMove.auxiliary;
        destination = currentMove.destination;

        if (n == 1)
        {
            cout << "Move disk 1 from " << source << " to " << destination << endl;
        }
        else
        {
            // Push the next moves onto the stack in reverse order
            moves.push({n - 1, auxiliary, source, destination});
            moves.push({1, source, auxiliary, destination});
            moves.push({n - 1, source, destination, auxiliary});
        }
    }
}

int main()
{
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    towerOfHanoiNonRecursive(numDisks, 'A', 'B', 'C');

    return 0;
}