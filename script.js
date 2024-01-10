const targetDate = new Date('2024-01-01T00:00:00');

function hitungMundur() {
  const sekarang = new Date();
  const selisihWaktu = targetDate - sekarang;

  const hari = Math.floor(selisihWaktu / (1000 * 60 * 60 * 24));
  const jam = Math.floor((selisihWaktu % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
  const menit = Math.floor((selisihWaktu % (1000 * 60 * 60)) / (1000 * 60));
  const detik = Math.floor((selisihWaktu % (1000 * 60)) / 1000);

  const countdownElement = document.getElementById('countdown');
  countdownElement.innerHTML = `<p>${hari} hari</p><p>${jam} jam</p><p>${menit} menit</p><p>${detik} detik</p>`;
}

hitungMundur();

setInterval(hitungMundur, 1000);