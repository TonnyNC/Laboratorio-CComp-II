#include <iostream>
#include <string>

double porletra(std::string &texto, char letra){
  double porcentaje=0.0;
  double cantidad=0;
  for (int i = 0;i<=texto.size();i++){
    if (texto[i]==letra){
      if((int)texto[i]!=32){
        cantidad++;
      }
    }
  }
  porcentaje = cantidad/texto.size();
  porcentaje *= 100;
  return porcentaje;
}

void drawlines(double porcentaje){
  for(int i = 0; i<(int)porcentaje;i++){
    std::cout << '|';
  }
  std::cout << '('<< porcentaje <<')';
  std::cout << std::endl;

  

}
//h y d mism freq
//n y s mism freq
//o y q mism freq
//a c y e mism freq

void deco_freq_eng(std::string *texto, std::string* texto_ordenado) {                     
  std::string freq_rel = "rbmjwkipudhvnycxotslfqeagz";
  std::string freq_eng = "etaoinshrdlcumwfgypbvkjxqz";
  for (int i = 0 ; i < 26 ; i++){
    for (int j = 0 ; j < (*texto).size() ; j++){
      if(freq_rel[i] == (*texto)[j]){
        (*texto_ordenado)[j] = freq_eng[i];
      }
    }
  }
  std::cout << *texto << "\n\n\n";
  std::cout << *texto_ordenado;
}

int main() {

  std::string Text = "xultpaajcxitltlxaarpjhtiwtgxktghidhipxciwtvgtpilpitghlxiwiwtxgqadds";
  std::string texto_ordenado = Text;

  double mayor = 0;
  char mchar = ' ';
  for (int i = 0; i<26;i++){
    double resultado = porletra(Text, (char)('a'+i));
    if(resultado > mayor){
      mayor = resultado;
      mchar = (char)('a'+i);
    }
    std::cout << (char)('a'+i);
    drawlines(resultado);
  }

  std::cout << "Mayor:  " << mchar << std::endl;

  deco_freq_eng(&Text, &texto_ordenado);
  
}
