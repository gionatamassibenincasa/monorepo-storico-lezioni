function getRandomInt(min, max) {
  min = Math.ceil(min);
  max = Math.floor(max);
  return Math.floor(Math.random() * (max - min) + min); //The maximum is exclusive and the minimum is inclusive
}

const stag = [12, 24, 30, 36];
const clienti = ["Mario Rossi", "Paolo Rossi", "Alcampo"];
let id = 1;
for (let anno = 2020; anno < 2023 && id < 339; anno++) {
  for (let mese = 1; mese < 13 && id < 339; mese++) {
    const venditeMensili = getRandomInt(2, 7);
    for (let v = 0; v < venditeMensili && id < 339; v++) {
      if (id % 17) id += getRandomInt(1, 5);
      let giornoPrecedente = 1;
      const giorno = getRandomInt(1, 29);
      const cliente = clienti[getRandomInt(0, 3)];
      const scelta = getRandomInt(1, 3);
      const stagionatura = stag[getRandomInt(0, 4)];
      const data =
        anno +
        "-" +
        String(mese).padStart(2, "0") +
        "-" +
        String(giorno).padStart(2, "0");
      console.log(
        `, (${id}, '${cliente}', '${data}', ${scelta}, ${stagionatura})`
      );
      id++;
      //giornoPrecedente = giorno;
    }
  }
}
