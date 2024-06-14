class Solution {
public:
    string intToRoman(int num) {
        int remainder = num ;
        string roman = string() ;
        // thousands
        while(remainder-1000>=0){
            remainder -= 1000 ;
            roman.append("M") ;
        }

        while(remainder-900>=0){
            remainder -= 900 ;
            roman.append("CM") ;
        }

        while(remainder-500>=0){
            remainder -= 500 ;
            roman.append("D") ;
        }
    
        while(remainder-400>=0){
            remainder -= 400 ;
            roman.append("CD") ;
        }

        while(remainder-100>=0){
            remainder -= 100 ;
            roman.append("C") ;
        }
    
        while(remainder-90>=0){
            remainder -= 90 ;
            roman.append("XC") ;
        }

        while(remainder-50>=0){
            remainder -= 50 ;
            roman.append("L") ;
        }
    
        while(remainder-40>=0){
            remainder -= 40 ;
            roman.append("XL") ;
        }

        while(remainder-10>=0){
            remainder -= 10 ;
            roman.append("X") ;
        }
    
        while(remainder-9>=0){
            remainder -= 9 ;
            roman.append("IX") ;
        }

        while(remainder-5>=0){
            remainder -= 5 ;
            roman.append("V") ;
        }
    
        while(remainder-4>=0){
            remainder -= 4 ;
            roman.append("IV") ;
        }

        while(remainder-1>=0){
            remainder -= 1 ;
            roman.append("I") ;
        }
    
        return roman ;
    } 
};
