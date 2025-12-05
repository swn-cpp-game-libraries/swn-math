export module swn.math;

export namespace swn {
	/// @brief 数学関数を提供するクラス
	class Mathf {
	public:
		/// @brief 絶対値を返す
		/// @param value 絶対値を求めたい値
		/// @return 絶対値
		static constexpr float Abs(float value) noexcept { return (value < 0.0f) ? -value : value; }
	};
}