export module swn.math;

export namespace swn {
	/// @brief 数学関数を提供するクラス
	class Mathf {
	public:
		/// @brief 絶対値を返す
		/// @param value 絶対値を求めたい値
		/// @return 絶対値
		static constexpr float Abs(float value) noexcept { return (value < 0.0f) ? -value : value; }

		/// @brief 2つの値のうち大きい方を返す
		/// @param value1 評価する値1
		/// @param value2 評価する値2
		/// @return 大きい方の値
		static constexpr float max(float value1, float value2) noexcept { return (value1 > value2) ? value1 : value2; }

		/// @brief 2つの値のうち小さい方を返す
		/// @param value1 評価する値1
		/// @param value2 評価する値2
		/// @return 小さい方の値
		static constexpr float min(float value1, float value2) noexcept { return (value1 < value2) ? value1 : value2; }
	};
}