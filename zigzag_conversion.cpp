class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> convertedStringSet(numRows,string()) ;
        int column = -1 ;
        int row = 0 ; 
        int direction = 1 ;
        for(int i = 0 ; i < s.length() ; i++){
            if (row == 0){
                direction = 1 ;
            }
            if (row == numRows-1){
                direction = -1 ;
            }
            if (direction == -1){
                column++;
            }
            convertedStringSet.at(row) += s[i] ;
            row += direction ;
            row = max(row, 0) ;
        } 
        string convertedString = string() ;
        for(int i = 0 ; i < numRows ; i++){
            convertedString.append(convertedStringSet.at(i)) ;
        }
        return convertedString ;
    }
};
