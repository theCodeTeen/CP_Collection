vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
            int a=0,b=0,c=0;
            vector<int> common;
            while(a<n1&&b<n2&&c<n3)
            {
                if(A[a]==B[b]&&B[b]==C[c]){
                    common.push_back(A[a]);
                    while(A[a]==B[b]) a++;
                }
                while(A[a]<B[b]) a++;
                while(B[b]<C[c]) b++;
                while(C[c]<A[a]) c++;
            }
            return common;
}