


#include<iostream>


class Poste {
private:
    char serv;
public:
    int numeroClienteTotali = 0;
    int numeroClienteSpedizione = 0;
    int numeroClienteRicezione = 0;
    int numeroClienteFinanziaro = 0;

    void motivoPoste() {
        std::cout << "Benvenuto alle poste di Corticella" << std::endl;
        std::cout << "Ecco i Servizi disponibili: " << std::endl;
        std::cout << "SPEDIZIONE" << std::endl;
        std::cout << "RICEZIONE" << std::endl;
        std::cout << "FINANZIARO" << std::endl;
    }

    void servizio() {
        std::cout << std::endl;
        std::cout << "Per prenotare SPEDIZIONE scrivere s" << std::endl;
        std::cout << "Per prenotare RICEZIONE scrivere r" << std::endl;
        std::cout << "Per prenotare FINANZIARO avendo una carta poste pay scrivere f" << std::endl;
        std::cout << "PRENOTA: ";
        std::cin >> serv;
    }

    void generaNumeroCliente() {

        if (serv == 's')
            numeroClienteSpedizione++;
        else if (serv == 'r')
            numeroClienteRicezione++;
        else if (serv == 'f')
            numeroClienteFinanziaro++;
        else {
            std::cout << "SERVIZIO INVALIDO" << std::endl;
        }
    }
};

int main() {
    Poste prova;
    prova.motivoPoste();
    prova.servizio();
    prova.generaNumeroCliente();
    std::cout << "CLIENTI: " << std::endl;
    std::cout << " SPORTELLO SPEDIZIONE--> " << prova.numeroClienteSpedizione << std::endl;
    std::cout << "SPORTELLO RICEZIONE--> " << prova.numeroClienteRicezione << std::endl;
    std::cout << "SPORTELLO FINANZIARO--> " << prova.numeroClienteFinanziaro << std::endl;

    return 0;
}

