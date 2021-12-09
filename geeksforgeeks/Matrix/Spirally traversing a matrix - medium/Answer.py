def spirallyTraverse(self,matrix, r, c): 
       
        tb,bb,lb,rb=-1,r,-1,c
        cr,cc=0,0
        ansList=[]
        
        while (tb+1!=bb and lb+1!=rb):
            while(cc<rb):
                ansList.append(matrix[cr][cc])
                cc+=1
            tb+=1
            cc-=1
            cr+=1
            while(cr<bb):
                ansList.append(matrix[cr][cc])
                cr+=1
            rb-=1
            cr-=1
            cc-=1
            while(cc>lb):
                ansList.append(matrix[cr][cc])
                cc-=1
            bb-=1
            cc+=1
            cr-=1
            while(cr>tb):
                ansList.append(matrix[cr][cc])
                cr-=1
            lb+=1
            cr+=1
            cc+=1
            
      
        return ansList