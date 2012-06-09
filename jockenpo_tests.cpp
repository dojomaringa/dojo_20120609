// EXECUÇÃO DOS TESTES:
// g++ jockenpo_tests.cpp -lboost_unit_test_framework -std=c++0x -o teste -Wall

#define BOOST_TEST_DYN_LINK 
#define BOOST_TEST_MODULE JockenPo

#include <boost/test/unit_test.hpp>
#include "jockenpo.cpp"

JockenPo j;

BOOST_AUTO_TEST_CASE(pedra_papel) {
  BOOST_CHECK_EQUAL(j.jogar(PEDRA,PAPEL),JOGADOR2);
}

BOOST_AUTO_TEST_CASE(papel_pedra) {
  BOOST_CHECK_EQUAL(j.jogar(PAPEL,PEDRA),JOGADOR1);
}

BOOST_AUTO_TEST_CASE(pedra_tesoura) {
  BOOST_CHECK_EQUAL(j.jogar(PEDRA,TESOURA),JOGADOR1);
}

BOOST_AUTO_TEST_CASE(tesoura_pedra) {
  BOOST_CHECK_EQUAL(j.jogar(TESOURA,PEDRA),JOGADOR2);
}

BOOST_AUTO_TEST_CASE(tesoura_papel) {
  BOOST_CHECK_EQUAL(j.jogar(TESOURA,PAPEL),JOGADOR1);
}

BOOST_AUTO_TEST_CASE(papel_tesoura) {
  BOOST_CHECK_EQUAL(j.jogar(PAPEL,TESOURA),JOGADOR2);
}

BOOST_AUTO_TEST_CASE(pedra_pedra) {
  BOOST_CHECK_EQUAL(j.jogar(PEDRA,PEDRA),EMPATE);
}

BOOST_AUTO_TEST_CASE(tesoura_tesoura) {
  BOOST_CHECK_EQUAL(j.jogar(TESOURA,TESOURA),EMPATE);
}

BOOST_AUTO_TEST_CASE(papel_papel) {
  BOOST_CHECK_EQUAL(j.jogar(PAPEL,PAPEL),EMPATE);
}
