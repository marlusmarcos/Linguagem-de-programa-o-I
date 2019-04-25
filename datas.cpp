#include <iostream>
#include <string>


class Utilitarios {
public:
    //static std::string obterHoraAtual24H(void);
 
//    static std::string obterHoraAtual24HcomSeg(void);
 
  //  static std::string obterHoraAtual12H(void);
 
    //static std::string obterHoraAtual12HcomSeg(void);
 
    static std::string obterDataNumerica(void);
 
    //static std::string obterDataNumericaAnoResumido(void);
 
//    static std::string obterDataPorExtenso(void);
};

std::string Utilitarios::obterDataNumerica(void) {
 
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[20];
 
    time(&rawtime);
    timeinfo = localtime(&rawtime);
 
    strftime(buffer, 20, "%d/%m/%Y", timeinfo);
 
    return std::string(buffer);
}

/*std::string Utilitarios::obterDataNumericaAnoResumido(void) {
 
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[20];
 
    time(&rawtime);
    timeinfo = localtime(&rawtime);
 
    strftime(buffer, 20, "%d/%m/%y", timeinfo);
 
    return std::string(buffer);
}
 
std::string Utilitarios::obterDataPorExtenso(void) {
 
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[40];
    std::string data;
 
    time(&rawtime);
    timeinfo = localtime(&rawtime);
 
    strftime(buffer, 40, "%d", timeinfo);
    data = buffer;
 
    data += " de ";
 
    strftime(buffer, 40, "%m", timeinfo);
    if (strcmp(buffer, "01") == 0) {
        data += "janeiro de ";
    } else if (strcmp(buffer, "02") == 0) {
        data += "fevereiro de ";
    } else if (strcmp(buffer, "03") == 0) {
        data += "março de ";
    } else if (strcmp(buffer, "04") == 0) {
        data += "abril de ";
    } else if (strcmp(buffer, "05") == 0) {
        data += "maio de ";
    } else if (strcmp(buffer, "06") == 0) {
        data += "junho de ";
    } else if (strcmp(buffer, "07") == 0) {
        data += "julho de ";
    } else if (strcmp(buffer, "08") == 0) {
        data += "agosto de ";
    } else if (strcmp(buffer, "09") == 0) {
        data += "setembro de ";
    } else if (strcmp(buffer, "10") == 0) {
        data += "outubro de ";
    } else if (strcmp(buffer, "11") == 0) {
        data += "novembro de ";
    } else if (strcmp(buffer, "12") == 0) {
        data += "dezembro de ";
    }
 
    strftime(buffer, 40, "%Y", timeinfo);
    data += buffer;
 
    return data;
}

/**/
int main () {
	Utilitarios a = obterDataNumerica();
	std::cout << a;
}