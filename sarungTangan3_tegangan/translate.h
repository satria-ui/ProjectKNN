void ubah() {
  data();
  if (hurufnyaL != hurufnya) {
    buff++;
    // Serial.print("tunggu : ");
    if (buff >= 4) {
//      if (hurufnyaL != "I" or hurufnyaL != "Z" ) {
        hurufnya = hurufnyaL;
        if (!berubah) {
           Blynk.virtualWrite(V3, hurufnya);
           Blynk.setProperty(V3, "onLabel", hurufnya);
           Blynk.setProperty(V3, "offLabel", hurufnya);
          if (hurufnya != "-") {
            String datanya1 = "/HURUF MP3/" + hurufnya + ".mp3";
            int panjang = datanya1.length() + 1;
            char filenya[panjang];
            datanya1.toCharArray(filenya, panjang);
            audio.connecttoFS(SD, filenya);
            berubah = true;
          }
        }
//      }else if (hurufnyaL != "I" ) {
//        
//      }else if (hurufnyaL != "Z" ) {
//        
//      }
    }
  } else {
    // Serial.print("SAMA : ");
    buff = 0;
    berubah = false;
  }
}
