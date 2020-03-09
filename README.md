# Kruskal ve Prim Algoritmaları

## Kruskal

### En kısa yol bulma algoritmalarından bir tanesi olan Kruskal algoritması bir graf yapısı içerisinde tarama ağacı oluşturarak tüm düğümlere ulaşmayı hedefler. Kağıt üzerinde uygularken oldukça efektif olan bu algoritma Prims algoritmasıyla aynı amacı taşır, ancak uygulama olarak düğümleri değil, kenarları inceler.

## Prim

### En Kısa yol bulma algoritmalarından olan Prims algoritması Greedy bir algoritmadır. Öncelikli olarak En kısa yol bulma algoritmalarındaki temel amacı belirtelim. En Kısa yol bulma algoritmalarında ağırlıklı graf kullanılır. İki düğüm arası bir maliyet değeri vardır. Bunu iki şehir arasındaki uzaklık gibi düşünebilirsiniz. Bu tip algoritmalardaki amaç iki düğüm arasındaki en kısa yolu bulma olduğu gibi, tüm düğümleri en kısa yolu kullanarak gezmeyi hedeflemek de olabilir. Prims Algoritmasındaki amaç tüm düğümleri en az maliyet ile dolaşmaktır.

<img src="https://github.com/Mmetinn/images/blob/master/kruksalPrimImage1.png" width="1150" height="650" />

### Uygulamayı çalıştırdığımızda Node Ekle butonuna tıkladığımızda kendisi otomatik olarak 0’dan başlayarak node ekliyor.

<img src="https://github.com/Mmetinn/images/blob/master/kruksalPrimImage2.png" width="1150" height="650" />
<img src="https://github.com/Mmetinn/images/blob/master/kruksalPrimImage3.png" width="1150" height="650" />

### Text Edit kısmında nodeların idlerini aralarında bir boşluk bırakıp yazdıktan sonra bağla butonu ile birbirlerine bağlayabiliyoruz.

<img src="https://github.com/Mmetinn/images/blob/master/kruksalPrimImage4.png" width="1150" height="650" />

### Kruksal butonuna bastığımızda Kruksal algoritmasına göre ağırlık hesaplayıp ekrada gösteriyor kullanılmayan bağlantıları kaldırıyor.

<img src="https://github.com/Mmetinn/images/blob/master/kruksalPrimImage5.png" width="1150" height="650" />

### Aynı şekilde Prim butonuna basıldığında Prim algoritmasına göre ağırlık hesaplayıp ekrana yazdırıyor ve kullanılmayan yolları kaldırıyor.

<img src="https://github.com/Mmetinn/images/blob/master/kruksalPrimImage6.png" width="1150" height="650" />

### Son olarak ise ekranı temizle dediğimizde tüm nodeları ve ağırlıkları siliyor.
