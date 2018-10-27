//
//  main.cpp
//  hackathon
//
//  Created by Kerem Dayi on 26.10.2018.
//  Copyright © 2018 Kerem Dayi. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin>>n;

    // dogru kelimeleri iceren array
    string wordlist[n];
    
    // dogru kelimeleri input al
    for (int i = 0; i < n; i++){
        
        cin>>wordlist[i];
        cout<<wordlist[i]<<endl;
    }
    
    // bozulmus cumleyi iceren array
    string sentence[n];
    
    // bozulmus cumleyi input al
    for (unsigned short i = 0; i < n; i++){
        cin>>sentence[i];

    }
    
    for(unsigned short i = 0; i < n; i ++){
        // her kelime icin
        // su anki kelime
        
        string sorted_current = sentence[i];
        // kelimeyi sortla
        
        cout<<2<<endl;
        string word_list_word = "";
        
        // wordlisti gez wordlistten match bul
        for(unsigned short j = 0; j < n; j++){
            
            word_list_word = wordlist[j];
            if(word_list_word.size() != sorted_current.size()){
                continue;
            }
            sort(sorted_current.begin(), sorted_current.end());
            
            string sorted_word_list = word_list_word;
            // kelimeyi sortla
            sort(sorted_word_list.begin(), sorted_word_list.end());
            cout<<1<<endl;
            if(sorted_current == sorted_word_list){
                break;
            }
        }     // wordlisti gez wordlistten match bul
        
        cout<<word_list_word<<" ";
        
        
        
    } // cumledeki her kelime icin
    
    return 0;
}
