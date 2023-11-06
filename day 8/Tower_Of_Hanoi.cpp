class solution
{
    public:

    long long toh(int N, int from, int to, int aux) {
        if(N==1){
            cout << "move disk 1 from rod " << from << " to rod " << to <<endl;
            return 1;
        }

        long long moves=0;
        moves+=toh(N-1,from,aux,to);
        moves++;
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;

        moves+=toh(N-1,aux,to,from);
        return moves;
        
    }
};