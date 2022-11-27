function getRandomInt(min, max) {
  min = Math.ceil(min);
  max = Math.floor(max);
  return Math.floor(Math.random() * (max - min) + min); //The maximum is exclusive and the minimum is inclusive
}

const caseifici = [1, 2, 3];
let id = 1;
for (let c = 0; c < caseifici.length; c++) {
  for (let anno = 2018; anno < 2022; anno++) {
    for (let mese = 1; mese < 13; mese++) {
      let progressivo = 1;
      let giornoPrecedente = 1;
      const produzioneMensile = getRandomInt(1, 10);
      for (g = 0; g < produzioneMensile; g++) {
        const giorno = getRandomInt(giornoPrecedente, 28);
        const qt = getRandomInt(1, 15);
        const data =
          anno +
          "-" +
          String(mese).padStart(2, "0") +
          "-" +
          String(giorno).padStart(2, "0");
        console.log(
          `, (${id}, ${caseifici[c]}, '${data}', ${qt}, ${progressivo})`
        );
        id++;
        progressivo++;
        giornoPrecedente = giorno;
      }
    }
  }
}
