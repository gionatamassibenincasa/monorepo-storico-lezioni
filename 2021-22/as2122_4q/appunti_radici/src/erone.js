const fs = require("fs");
/**
 *
 * @param {Number} r Radicando
 * @param {Number} x la stima iniziale della radice quadrata
 * @param {Number} e1 tolleranza su asse delle ascisse
 * @param {Number} e2 tolleranza su asse delle ordinate
 * @param {Number} nmax numero massimo di iterazioni
 */
const eroneToTeX = (r, x, e1 = 1e-16, e2 = 1e-16, nmax = 10) => {
  const sep = "\t"; // "&"
  const endl = "\n"; // "\\\\\n"
  const endt = "\n"; // "\\hline"
  // Commento
  let str = `% Metodo di Erone (radice quadrata), r: ${r}, \$x_0\$: ${x}\n`;
  // Intestazioni
  str +=
    "$k$" +
    sep +
    "$x_k$" +
    sep +
    "$r/x_k$" +
    sep +
    "$|x_{k+1}-x_{k}|$" +
    endl;
  let err = e1 + 1; // permette di entrare nel ciclo
  for (let iter = 0; iter < nmax && err >= e1; iter++) {
    let xp = x, y = r / x;
    x = (xp + y) / 2;
    err = Math.abs(x - xp);
    str += iter + sep + xp + sep + y + sep + err + endl;
    if (Math.abs(r - y * y) < e2) {
      return str + endt;
    }
  }
  return str + endt;
};

fs.writeFileSync(
  "../tbl/tab_erone_sqrt_6.dat",
  eroneToTeX(
    6,
    3
  )
);

