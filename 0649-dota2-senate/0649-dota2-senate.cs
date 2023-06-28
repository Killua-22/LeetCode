public class Solution {
    public string PredictPartyVictory(string senate) {
        Queue<char> q = new Queue<char>(senate);
        int r_count = senate.Count(x => x == 'R');
        int d_count = senate.Length - r_count;

        int winner = 0;

        while(r_count>0 && d_count>0)
        {
            char senator = q.Dequeue();

            if(senator == 'R'){
                if(winner >= 0){
                    d_count--;
                    q.Enqueue(senator);
                }
                winner++;
            }
            else{
                if(winner<=0)
                {
                    r_count--;
                    q.Enqueue(senator);
                }
                winner--;
            }

        }

        return r_count == 0 ? "Dire" : "Radiant";

    }
}